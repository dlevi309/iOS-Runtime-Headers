/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class NSArray, NSDictionary;

@interface CNPostalAddressFormattingSpecification : NSObject {

	NSArray* _displayFieldArrangement;
	NSArray* _editingFieldArrangement;
	NSDictionary* _fieldLabelMap;

}

@property (nonatomic,readonly) NSDictionary * fieldLabelMap;                   //@synthesize fieldLabelMap=_fieldLabelMap - In the implementation block
@property (nonatomic,readonly) NSArray * displayFieldArrangement;              //@synthesize displayFieldArrangement=_displayFieldArrangement - In the implementation block
@property (nonatomic,readonly) NSArray * editingFieldArrangement;              //@synthesize editingFieldArrangement=_editingFieldArrangement - In the implementation block
-(id)initWithDisplayFieldArrangement:(id)arg1 editingFieldArrangement:(id)arg2 fieldLabelMap:(id)arg3 ;
-(NSArray *)displayFieldArrangement;
-(id)localizedPlaceholderForKey:(id)arg1 ;
-(NSDictionary *)fieldLabelMap;
-(NSArray *)editingFieldArrangement;
@end

