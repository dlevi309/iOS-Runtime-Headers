/*
* Generated on Thursday, January 14, 2021 at 2:21:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class _WKWebsiteDataSize, NSString, NSSet;

@interface WKWebsiteDataRecord : NSObject <WKObject> {

	ObjectStorage<API::WebsiteDataRecord> _websiteDataRecord;

}

@property (nonatomic,readonly) _WKWebsiteDataSize * _dataSize; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,copy,readonly) NSSet * dataTypes; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)_originsStrings;
-(Object*)_apiObject;
-(_WKWebsiteDataSize *)_dataSize;
-(NSSet *)dataTypes;
-(NSString *)displayName;
-(void)dealloc;
@end

