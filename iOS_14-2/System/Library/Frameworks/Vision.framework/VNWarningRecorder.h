/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <libobjc.A.dylib/VNWarningRecorder.h>

@class NSMutableDictionary, NSString;

@interface VNWarningRecorder : NSObject <VNWarningRecorder> {

	NSMutableDictionary* _warnings;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setWarnings:(id)arg1 ;
-(void)recordWarnings:(id)arg1 ;
-(void)recordWarning:(id)arg1 value:(id)arg2 ;
-(id)valueForWarning:(id)arg1 ;
-(BOOL)hasWarnings;
-(id)warnings;
@end

