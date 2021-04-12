/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/SWProcessConfiguration.h>

@protocol SWProcessConfiguration <NSObject>
@property (nonatomic,readonly) BOOL shouldRunAtBackgroundPriority; 
@required
-(BOOL)shouldRunAtBackgroundPriority;

@end


@class NSString;

@interface SWProcessConfiguration : NSObject <SWProcessConfiguration> {

	BOOL _shouldRunAtBackgroundPriority;

}

@property (nonatomic,readonly) BOOL shouldRunAtBackgroundPriority;              //@synthesize shouldRunAtBackgroundPriority=_shouldRunAtBackgroundPriority - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldRunAtBackgroundPriority;
-(id)initWithBackgroundPriority:(BOOL)arg1 ;
@end

