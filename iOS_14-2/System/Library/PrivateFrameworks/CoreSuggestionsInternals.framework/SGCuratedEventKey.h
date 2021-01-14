/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <libobjc.A.dylib/SGEntityKey.h>

@class NSString;

@interface SGCuratedEventKey : NSObject <SGEntityKey> {

	NSString* _externalId;

}

@property (nonatomic,readonly) NSString * externalId;               //@synthesize externalId=_externalId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSupportedEntityType:(long long)arg1 ;
-(id)serialize;
-(NSString *)externalId;
-(id)initWithSerialized:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithExternalId:(id)arg1 ;
-(BOOL)isEqualToCuratedEventKey:(id)arg1 ;
@end

