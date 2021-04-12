/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/CNFetchRequestVisitor.h>

@class CNContactStore, CNResult, NSString;

@interface CNContactStoreFetchExecutor : NSObject <CNFetchRequestVisitor> {

	CNContactStore* _store;
	CNResult* _result;

}

@property (readonly) CNContactStore * store;                        //@synthesize store=_store - In the implementation block
@property (retain) CNResult * result;                               //@synthesize result=_result - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setResult:(CNResult *)arg1 ;
-(id)init;
-(CNContactStore *)store;
-(void)visitChangeHistoryFetchRequest:(id)arg1 ;
-(id)initWithContactStore:(id)arg1 ;
-(CNResult *)result;
-(id)executeFetchRequest:(id)arg1 ;
-(void)visitContactFetchRequest:(id)arg1 ;
@end

