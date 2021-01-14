/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)updateItems;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithError:(id)arg1 ;
-(NSError *)error;
-(id)description;
-(BOOL)isFailed;
-(id)copyUpdateItemDictionaries;
-(void)setUpdateItemsWithItemDictionaries:(id)arg1 ;
-(void)dealloc;
@end

