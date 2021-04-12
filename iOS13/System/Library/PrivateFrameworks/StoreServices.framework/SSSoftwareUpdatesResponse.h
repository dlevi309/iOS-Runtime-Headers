/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class NSError, NSArray;

@interface SSSoftwareUpdatesResponse : NSObject {

	NSError* _error;
	BOOL _failed;
	NSArray* _updateItems;

}

@property (readonly) NSError * error; 
@property (getter=isFailed,readonly) BOOL failed; 
@property (readonly) NSArray * updateItems; 
-(void)dealloc;
-(id)description;
-(NSError *)error;
-(id)initWithError:(id)arg1 ;
-(BOOL)isFailed;
-(NSArray *)updateItems;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)copyUpdateItemDictionaries;
-(void)setUpdateItemsWithItemDictionaries:(id)arg1 ;
@end

