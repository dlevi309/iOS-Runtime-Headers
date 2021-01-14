/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPFileCoordinatorDelegate.h>

@class NSURL, NSString;

@interface TSPTemporaryFileCoordinatorDelegate : NSObject <TSPFileCoordinatorDelegate> {

	NSURL* _URL;

}

@property (nonatomic,copy) NSURL * URL;                             //@synthesize URL=_URL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(void)performReadUsingAccessor:(/*^block*/id)arg1 ;
@end

