/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXEmbedType.h>

@class NSURL, NSString;

@interface NUEmbedData : SXJSONObject <SXEmbedType>

@property (nonatomic,readonly) double minimumWidth; 
@property (nonatomic,readonly) double maximumWidth; 
@property (nonatomic,readonly) NSURL * baseURL; 
@property (nonatomic,readonly) NSString * enclosingHTML; 
@property (nonatomic,readonly) NSString * bodyHTML; 
@property (nonatomic,readonly) NSString * javaScript; 
@property (nonatomic,readonly) unsigned long long autoPlayMedia; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)autoPlayMedia;
-(NSString *)javaScript;
-(NSString *)bodyHTML;
-(NSString *)enclosingHTML;
-(NSURL *)baseURL;
-(double)maximumWidth;
-(double)minimumWidth;
-(unsigned long long)autoPlayMediaWithValue:(id)arg1 withType:(int)arg2 ;
@end

