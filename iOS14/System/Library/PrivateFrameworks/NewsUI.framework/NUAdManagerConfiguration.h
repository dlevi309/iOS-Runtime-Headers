/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NewsUI-Structs.h>
#import <libobjc.A.dylib/NUAdManagerConfiguration.h>

@protocol NUAdManagerConfiguration <NSCopying>
@property (assign,nonatomic) BOOL enabled; 
@property (assign,nonatomic) double timeout; 
@required
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1;
-(void)setTimeout:(double)arg1;
-(double)timeout;

@end


@interface NUAdManagerConfiguration : NSObject <NUAdManagerConfiguration> {

	BOOL enabled;
	double timeout;

}

@property (assign,nonatomic) BOOL enabled; 
@property (assign,nonatomic) double timeout; 
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

