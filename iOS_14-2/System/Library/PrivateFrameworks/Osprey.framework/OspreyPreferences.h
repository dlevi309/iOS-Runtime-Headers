/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
*/


@class OspreyKeychain;

@interface OspreyPreferences : NSObject {

	OspreyKeychain* _keychain;

}
-(id)connections;
-(void)synchronize;
-(id)initWithKeychain:(id)arg1 ;
-(id)connectionPreferencesForHost:(id)arg1 ;
-(void)deleteConnectionPreferencesForHost:(id)arg1 ;
-(void)setConnectionPreferences:(id)arg1 ;
@end

