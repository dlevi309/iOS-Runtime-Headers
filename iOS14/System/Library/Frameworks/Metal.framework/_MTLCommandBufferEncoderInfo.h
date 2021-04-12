/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <libobjc.A.dylib/MTLCommandBufferEncoderInfo.h>

@class NSString, NSArray;

@interface _MTLCommandBufferEncoderInfo : NSObject <MTLCommandBufferEncoderInfo> {

	unsigned long long _uniqueID;
	unsigned long long _globalTraceObjectID;
	NSString* _label;
	NSArray* _debugSignposts;
	long long _errorState;

}

@property (assign,nonatomic) unsigned long long uniqueID;                         //@synthesize uniqueID=_uniqueID - In the implementation block
@property (assign,nonatomic) unsigned long long globalTraceObjectID;              //@synthesize globalTraceObjectID=_globalTraceObjectID - In the implementation block
@property (nonatomic,retain) NSString * label;                                    //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSArray * debugSignposts;                            //@synthesize debugSignposts=_debugSignposts - In the implementation block
@property (assign,nonatomic) long long errorState;                                //@synthesize errorState=_errorState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUniqueID:(unsigned long long)arg1 ;
-(unsigned long long)globalTraceObjectID;
-(unsigned long long)uniqueID;
-(long long)errorState;
-(void)setErrorState:(long long)arg1 ;
-(NSString *)description;
-(void)setDebugSignposts:(NSArray *)arg1 ;
-(NSArray *)debugSignposts;
-(void)setGlobalTraceObjectID:(unsigned long long)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)dealloc;
@end

