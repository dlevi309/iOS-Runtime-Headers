/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
*/


@interface ABSVCardRecord : NSObject {

	void* _record;

}

@property (nonatomic,readonly) void* record;              //@synthesize record=_record - In the implementation block
-(void)dealloc;
-(void*)record;
-(id)initWithRecord:(void*)arg1 ;
-(id)initWithVCardRepresentation:(id)arg1 ;
@end

