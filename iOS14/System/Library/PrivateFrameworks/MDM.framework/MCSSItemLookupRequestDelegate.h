/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MDM.framework/MDM
*/

#import <MDM/MCSSRequestDelegate.h>
#import <libobjc.A.dylib/SSItemLookupRequestDelegate.h>

@class NSArray, SSItemLookupRequest, NSString;

@interface MCSSItemLookupRequestDelegate : MCSSRequestDelegate <SSItemLookupRequestDelegate> {

	NSArray* _items;

}

@property (nonatomic,retain,readonly) SSItemLookupRequest * request; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instance;
-(void)itemLookupRequest:(id)arg1 didFindItems:(id)arg2 ;
-(void)startCompletionBlock:(/*^block*/id)arg1 ;
@end

