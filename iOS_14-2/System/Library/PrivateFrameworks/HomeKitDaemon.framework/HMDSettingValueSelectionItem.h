/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@class NSUUID, NSString;

@interface HMDSettingValueSelectionItem : NSObject {

	NSUUID* _identifier;
	NSString* _selection;

}

@property (copy,readonly) NSUUID * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSString * selection;              //@synthesize selection=_selection - In the implementation block
-(NSString *)selection;
-(unsigned long long)hash;
-(NSUUID *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 selection:(id)arg2 ;
@end

