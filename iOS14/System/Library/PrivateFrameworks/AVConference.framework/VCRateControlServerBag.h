/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class NSDictionary;

@interface VCRateControlServerBag : NSObject {

	NSDictionary* _serverBagDict;
	int _operatingMode;

}
+(id)prefixForMode:(int)arg1 ;
+(id)profileNumberKeyWithMode:(int)arg1 ;
+(id)groupKeysWithMode:(int)arg1 primaryKey:(id)arg2 ;
+(id)keysWithMode:(int)arg1 ;
-(void)dealloc;
-(BOOL)containsAllSecondaryKeysWithPrimaryKey:(id)arg1 ;
-(id)valueForSecondaryKeyWithPrimaryKey:(id)arg1 secondaryKey:(id)arg2 type:(int)arg3 ;
-(id)initWithMode:(int)arg1 serverBagDict:(id)arg2 ;
@end

