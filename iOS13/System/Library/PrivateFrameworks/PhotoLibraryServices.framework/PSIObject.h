/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clear;
-(NSString *)uuid;
-(void)setUUID:(id)arg1 ;
-(id)initWithUUID:(id)arg1 ;
-(NSArray *)tokens;
-(void)addSynonym:(id)arg1 category:(short)arg2 originalContentString:(id)arg3 ;
-(void)addContentString:(id)arg1 category:(short)arg2 owningCategory:(short)arg3 ;
-(void)addContentString:(id)arg1 identifier:(id)arg2 category:(short)arg3 owningCategory:(short)arg4 ;
-(void)addIdentifier:(id)arg1 category:(short)arg2 owningCategory:(short)arg3 ;
-(void)reverse;
-(id)initForReverse;
-(id)_initForCopy:(BOOL)arg1 ;
-(void)enumerateSynonymsForOriginalContentString:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

