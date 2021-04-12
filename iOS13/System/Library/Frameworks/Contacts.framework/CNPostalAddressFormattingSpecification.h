/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)localizedPlaceholderForKey:(id)arg1 ;
-(id)initWithDisplayFieldArrangement:(id)arg1 editingFieldArrangement:(id)arg2 fieldLabelMap:(id)arg3 ;
-(NSDictionary *)fieldLabelMap;
-(NSArray *)displayFieldArrangement;
-(NSArray *)editingFieldArrangement;
@end

