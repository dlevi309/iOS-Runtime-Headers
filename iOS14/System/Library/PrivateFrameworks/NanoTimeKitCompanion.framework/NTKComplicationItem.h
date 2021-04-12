/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

@class NSString;


@protocol NTKComplicationItem <NSObject>
@property (nonatomic,readonly) NSString * ntk_identifier; 
@property (nonatomic,readonly) NSString * ntk_sectionIdentifier; 
@property (nonatomic,readonly) unsigned long long ntk_itemType; 
@property (nonatomic,readonly) NSString * ntk_contactIdentifier; 
@required
-(NSString *)ntk_sectionIdentifier;
-(NSString *)ntk_identifier;
-(NSString *)ntk_contactIdentifier;
-(id)ntk_localizedNameWithOptions:(unsigned long long)arg1 forRichComplicationSlot:(BOOL)arg2;
-(unsigned long long)ntk_itemType;

@end

