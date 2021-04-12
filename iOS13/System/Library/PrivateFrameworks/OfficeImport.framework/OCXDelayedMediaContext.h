/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <libobjc.A.dylib/OCDDelayedMediaContext.h>

@class OCPPackage, NSURL, NSString;

@interface OCXDelayedMediaContext : NSObject <OCDDelayedMediaContext> {

	OCPPackage* mPackage;
	NSURL* mTargetLocation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(BOOL)loadDelayedNode:(id)arg1 ;
-(id)initWithTargetLocation:(id)arg1 package:(id)arg2 ;
-(BOOL)saveDelayedMedia:(id)arg1 toFile:(id)arg2 ;
-(id)dataRep;
@end

