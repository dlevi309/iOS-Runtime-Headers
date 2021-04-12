/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
*/


@class NSString;

@interface TPSCellularNetworkItem : NSObject {

	NSString* _identifier;
	NSString* _name;
	NSString* _localizedName;

}

@property (nonatomic,copy,readonly) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedName;              //@synthesize localizedName=_localizedName - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(NSString *)identifier;
-(NSString *)localizedName;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 localizedName:(id)arg3 ;
-(BOOL)isEqualToCellularNetworkItem:(id)arg1 ;
@end

