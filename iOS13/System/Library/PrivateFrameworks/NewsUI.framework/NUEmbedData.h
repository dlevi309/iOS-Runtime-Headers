/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXEmbedType.h>

@class NSURL, NSString;

@interface NUEmbedData : SXJSONObject <SXEmbedType>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double minimumWidth; 
@property (nonatomic,readonly) double maximumWidth; 
@property (nonatomic,readonly) NSURL * baseURL; 
@property (nonatomic,readonly) NSString * enclosingHTML; 
@property (nonatomic,readonly) NSString * javaScript; 
@property (nonatomic,readonly) unsigned long long autoPlayMedia; 
-(unsigned long long)autoPlayMedia;
-(NSString *)javaScript;
-(NSString *)enclosingHTML;
-(NSURL *)baseURL;
-(double)maximumWidth;
-(double)minimumWidth;
-(unsigned long long)autoPlayMediaWithValue:(id)arg1 withType:(int)arg2 ;
@end

