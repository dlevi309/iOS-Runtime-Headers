/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@class NSArray;

@interface CKRecipientGenerator : NSObject {

	NSArray* _searchABPropertyTypes;

}

@property (nonatomic,retain) NSArray * searchABPropertyTypes;              //@synthesize searchABPropertyTypes=_searchABPropertyTypes - In the implementation block
+(id)sharedRecipientGenerator;
-(void)setSearchABPropertyTypes:(NSArray *)arg1 ;
-(void)getAddressForContact:(id)arg1 address:(id*)arg2 kind:(unsigned long long*)arg3 ;
-(void)_appendSearchResults:(id)arg1 identifiers:(id)arg2 abPropertyType:(int)arg3 toArray:(id)arg4 ;
-(NSArray *)searchABPropertyTypes;
-(id)recipientWithAddress:(id)arg1 ;
-(id)recipientWithContact:(id)arg1 ;
-(id)recipientWithContactProperty:(id)arg1 ;
@end

