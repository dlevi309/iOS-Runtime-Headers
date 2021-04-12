/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
*/


@interface ABSVCardRecord : NSObject {

	void* _record;

}

@property (nonatomic,readonly) void* record;              //@synthesize record=_record - In the implementation block
-(void*)record;
-(id)initWithRecord:(void*)arg1 ;
-(id)initWithVCardRepresentation:(id)arg1 ;
-(void)dealloc;
@end

