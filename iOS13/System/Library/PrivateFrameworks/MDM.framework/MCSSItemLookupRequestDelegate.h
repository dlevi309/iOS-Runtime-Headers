/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

