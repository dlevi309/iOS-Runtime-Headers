/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@class NSArray;

@interface CKRecipientGenerator : NSObject {

	NSArray* _searchABPropertyTypes;

}

@property (nonatomic,retain) NSArray * searchABPropertyTypes;              //@synthesize searchABPropertyTypes=_searchABPropertyTypes - In the implementation block
+(id)sharedRecipientGenerator;
-(id)recipientWithAddress:(id)arg1 ;
-(id)recipientWithContact:(id)arg1 ;
-(id)recipientWithContactProperty:(id)arg1 ;
-(void)setSearchABPropertyTypes:(NSArray *)arg1 ;
-(void)getAddressForContact:(id)arg1 address:(id*)arg2 kind:(unsigned long long*)arg3 ;
-(void)_appendSearchResults:(id)arg1 identifiers:(id)arg2 abPropertyType:(int)arg3 toArray:(id)arg4 ;
-(NSArray *)searchABPropertyTypes;
@end

