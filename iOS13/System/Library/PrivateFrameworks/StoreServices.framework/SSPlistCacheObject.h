/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <libobjc.A.dylib/SSCacheObject.h>

@class NSDictionary, NSString;

@interface SSPlistCacheObject : NSObject <SSCacheObject> {

	NSDictionary* _plist;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cacheObjectTypeIdentifier;
-(void)dealloc;
-(void)setPlist:(id)arg1 ;
-(id)plist;
-(id)cacheObjectDataRepresentation;
-(id)cacheObjectTypeIdentifier;
-(id)initWithCacheObjectDataRepresentation:(id)arg1 ;
@end

