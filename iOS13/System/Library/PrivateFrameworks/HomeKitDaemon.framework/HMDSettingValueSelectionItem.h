/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@class NSUUID, NSString;

@interface HMDSettingValueSelectionItem : NSObject {

	NSUUID* _identifier;
	NSString* _selection;

}

@property (copy,readonly) NSUUID * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSString * selection;              //@synthesize selection=_selection - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSUUID *)identifier;
-(NSString *)selection;
-(id)initWithIdentifier:(id)arg1 selection:(id)arg2 ;
@end

