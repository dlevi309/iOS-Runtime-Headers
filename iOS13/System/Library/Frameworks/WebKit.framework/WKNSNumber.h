/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <Foundation/NSNumber.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface WKNSNumber : NSNumber <WKObject> {

	int _type;
	SCD_Union_WK48 _number;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(double)doubleValue;
-(long long)longLongValue;
-(unsigned long long)unsignedLongLongValue;
-(const char*)objCType;
-(char)charValue;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)getValue:(void*)arg1 ;
-(Object*)_apiObject;
@end

