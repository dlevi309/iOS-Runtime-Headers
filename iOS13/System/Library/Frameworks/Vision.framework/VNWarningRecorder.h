/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)recordWarning:(id)arg1 value:(id)arg2 ;
-(id)valueForWarning:(id)arg1 ;
-(id)warnings;
-(BOOL)hasWarnings;
-(void)setWarnings:(id)arg1 ;
-(void)recordWarnings:(id)arg1 ;
@end

