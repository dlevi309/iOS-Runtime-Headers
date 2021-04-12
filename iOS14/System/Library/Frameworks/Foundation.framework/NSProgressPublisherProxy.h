/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <libobjc.A.dylib/NSProgressPublisher.h>

@protocol NSProgressPublisher;
@class NSString, NSFileAccessNode, NSXPCConnection, NSProgressValues;

@interface NSProgressPublisherProxy : NSObject <NSProgressPublisher> {

	id<NSProgressPublisher> _forwarder;
	id _publisherID;
	NSString* _lowerCaseCategoryName;
	NSFileAccessNode* _itemLocation;
	NSXPCConnection* _connection;
	NSProgressValues* _values;

}

@property (copy) NSString * category;                               //@synthesize lowerCaseCategoryName=_lowerCaseCategoryName - In the implementation block
@property (assign) NSFileAccessNode * itemLocation; 
@property (copy,readonly) NSProgressValues * values;                //@synthesize values=_values - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCategory:(NSString *)arg1 ;
-(id)initWithForwarder:(id)arg1 onConnection:(id)arg2 publisherID:(id)arg3 values:(id)arg4 ;
-(oneway void)appWithBundleID:(id)arg1 didAcknowledgeWithSuccess:(BOOL)arg2 ;
-(oneway void)pause;
-(NSProgressValues *)values;
-(id)descriptionWithIndenting:(id)arg1 ;
-(void)setItemLocation:(NSFileAccessNode *)arg1 ;
-(NSFileAccessNode *)itemLocation;
-(NSString *)category;
-(oneway void)prioritize;
-(void)observeUserInfoValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isFromConnection:(id)arg1 ;
-(void)observeValues:(id)arg1 forKeys:(id)arg2 ;
-(NSString *)description;
-(id)publisherID;
-(oneway void)cancel;
-(oneway void)resume;
-(void)dealloc;
@end

