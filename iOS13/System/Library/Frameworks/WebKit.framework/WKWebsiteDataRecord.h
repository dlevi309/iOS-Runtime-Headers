/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(void)dealloc;
-(NSString *)description;
-(NSString *)displayName;
-(Object*)_apiObject;
-(NSSet *)dataTypes;
-(_WKWebsiteDataSize *)_dataSize;
-(id)_originsStrings;
@end

