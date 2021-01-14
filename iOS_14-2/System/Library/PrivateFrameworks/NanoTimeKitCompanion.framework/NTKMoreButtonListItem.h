/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <libobjc.A.dylib/NTKComplicationItem.h>

@class NSString;

@interface NTKMoreButtonListItem : NSObject <NTKComplicationItem> {

	NSString* _ntk_identifier;
	NSString* _ntk_sectionIdentifier;

}

@property (nonatomic,readonly) NSString * ntk_identifier;                     //@synthesize ntk_identifier=_ntk_identifier - In the implementation block
@property (nonatomic,readonly) NSString * ntk_sectionIdentifier;              //@synthesize ntk_sectionIdentifier=_ntk_sectionIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long ntk_itemType; 
@property (nonatomic,readonly) NSString * ntk_contactIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSectionIdentifier:(id)arg1 ;
-(NSString *)ntk_sectionIdentifier;
-(NSString *)ntk_identifier;
-(NSString *)ntk_contactIdentifier;
-(id)ntk_localizedNameWithOptions:(unsigned long long)arg1 forRichComplicationSlot:(BOOL)arg2 ;
-(unsigned long long)ntk_itemType;
@end

