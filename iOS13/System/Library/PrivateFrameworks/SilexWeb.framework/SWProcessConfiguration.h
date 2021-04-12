/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL shouldRunAtBackgroundPriority;              //@synthesize shouldRunAtBackgroundPriority=_shouldRunAtBackgroundPriority - In the implementation block
-(BOOL)shouldRunAtBackgroundPriority;
-(id)initWithBackgroundPriority:(BOOL)arg1 ;
@end

