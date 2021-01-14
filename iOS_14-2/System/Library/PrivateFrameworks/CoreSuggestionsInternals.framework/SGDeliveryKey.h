/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <libobjc.A.dylib/SGEntityKey.h>

@class NSString;

@interface SGDeliveryKey : NSObject <SGEntityKey> {

	NSString* _externalIdentifier;
	unsigned long long _provider;
	NSString* _trackingNumber;

}

@property (nonatomic,readonly) NSString * externalIdentifier;              //@synthesize externalIdentifier=_externalIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long provider;                //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) NSString * trackingNumber;                  //@synthesize trackingNumber=_trackingNumber - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSupportedEntityType:(long long)arg1 ;
-(id)serialize;
-(id)initWithSerialized:(id)arg1 ;
-(unsigned long long)provider;
-(NSString *)externalIdentifier;
-(NSString *)trackingNumber;
-(NSString *)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithProvider:(unsigned long long)arg1 trackingNumber:(id)arg2 ;
-(BOOL)isEqualToDeliveryKey:(id)arg1 ;
@end

