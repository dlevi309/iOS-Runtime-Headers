/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString, NSArray;

@interface PSIObject : NSObject <NSCopying> {

	NSMutableDictionary* _synonymsByOriginalWord;
	NSString* _uuid;
	NSArray* _tokens;

}

@property (setter=setUUID:,nonatomic,copy) NSString * uuid;              //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSArray * tokens;                         //@synthesize tokens=_tokens - In the implementation block
-(void)reverse;
-(void)clear;
-(NSArray *)tokens;
-(NSString *)uuid;
-(void)addSynonym:(id)arg1 category:(short)arg2 originalContentString:(id)arg3 ;
-(void)addContentString:(id)arg1 identifier:(id)arg2 category:(short)arg3 owningCategory:(short)arg4 ;
-(void)addSynonym:(id)arg1 identifier:(id)arg2 category:(short)arg3 originalContentString:(id)arg4 ;
-(void)addContentString:(id)arg1 category:(short)arg2 owningCategory:(short)arg3 ;
-(void)addIdentifier:(id)arg1 category:(short)arg2 owningCategory:(short)arg3 ;
-(void)enumerateSynonymsForOriginalContentString:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)_initForCopy:(BOOL)arg1 ;
-(id)description;
-(void)setUUID:(id)arg1 ;
-(id)initForReverse;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithUUID:(id)arg1 ;
@end

