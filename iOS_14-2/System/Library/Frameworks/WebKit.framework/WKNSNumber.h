/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <Foundation/NSNumber.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface WKNSNumber : NSNumber <WKObject> {

	int _type;
	SCD_Union_WK52 _number;

}

@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)doubleValue;
-(void)getValue:(void*)arg1 ;
-(char)charValue;
-(Object*)_apiObject;
-(long long)longLongValue;
-(unsigned long long)unsignedLongLongValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(const char*)objCType;
-(void)dealloc;
@end

