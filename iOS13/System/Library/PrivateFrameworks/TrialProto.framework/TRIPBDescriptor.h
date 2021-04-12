/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TrialProto-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, TRIPBFileDescriptor, NSString;

@interface TRIPBDescriptor : NSObject <NSCopying> {

	NSArray* fields_;
	NSArray* oneofs_;
	unsigned storageSize_;
	Class messageClass_;
	TRIPBFileDescriptor* file_;
	BOOL wireFormat_;
	unsigned extensionRangesCount_;
	const TRIPBExtensionRange* extensionRanges_;

}

@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * fields; 
@property (nonatomic,readonly) NSArray * oneofs; 
@property (nonatomic,readonly) const TRIPBExtensionRange* extensionRanges; 
@property (nonatomic,readonly) unsigned extensionRangesCount; 
@property (nonatomic,readonly) TRIPBFileDescriptor * file; 
@property (getter=isWireFormat,nonatomic,readonly) BOOL wireFormat; 
@property (nonatomic,readonly) Class messageClass; 
@property (readonly) TRIPBDescriptor * containingType; 
@property (readonly) NSString * fullName; 
+(id)allocDescriptorForClass:(Class)arg1 rootClass:(Class)arg2 file:(id)arg3 fields:(void*)arg4 fieldCount:(unsigned)arg5 storageSize:(unsigned)arg6 flags:(unsigned)arg7 ;
-(void)dealloc;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)fields;
-(TRIPBFileDescriptor *)file;
-(NSString *)fullName;
-(Class)messageClass;
-(void)setupExtraTextInfo:(const char*)arg1 ;
-(id)initWithClass:(Class)arg1 file:(id)arg2 fields:(id)arg3 storageSize:(unsigned)arg4 wireFormat:(BOOL)arg5 ;
-(TRIPBDescriptor *)containingType;
-(void)setupOneofs:(const char**)arg1 count:(unsigned)arg2 firstHasIndex:(int)arg3 ;
-(void)setupExtensionRanges:(const TRIPBExtensionRange*)arg1 count:(int)arg2 ;
-(void)setupContainingMessageClassName:(const char*)arg1 ;
-(void)setupMessageClassNameSuffix:(id)arg1 ;
-(id)fieldWithNumber:(unsigned)arg1 ;
-(id)fieldWithName:(id)arg1 ;
-(id)oneofWithName:(id)arg1 ;
-(NSArray *)oneofs;
-(const TRIPBExtensionRange*)extensionRanges;
-(unsigned)extensionRangesCount;
-(BOOL)isWireFormat;
@end

