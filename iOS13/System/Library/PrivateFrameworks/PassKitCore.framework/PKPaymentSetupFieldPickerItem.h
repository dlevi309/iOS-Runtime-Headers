/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, DIAttributePickerItem;

@interface PKPaymentSetupFieldPickerItem : NSObject <NSCopying> {

	NSString* _localizedDisplayName;
	NSString* _submissionValue;
	DIAttributePickerItem* _attributePickerItem;

}

@property (nonatomic,copy,readonly) NSString * localizedDisplayName;                   //@synthesize localizedDisplayName=_localizedDisplayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * submissionValue;                        //@synthesize submissionValue=_submissionValue - In the implementation block
@property (nonatomic,retain) DIAttributePickerItem * attributePickerItem;              //@synthesize attributePickerItem=_attributePickerItem - In the implementation block
+(id)_itemWithDictionary:(id)arg1 ;
+(id)_itemWithDIAttributePickerItem:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithName:(id)arg1 value:(id)arg2 ;
-(NSString *)localizedDisplayName;
-(void)setAttributePickerItem:(DIAttributePickerItem *)arg1 ;
-(NSString *)submissionValue;
-(DIAttributePickerItem *)attributePickerItem;
@end

