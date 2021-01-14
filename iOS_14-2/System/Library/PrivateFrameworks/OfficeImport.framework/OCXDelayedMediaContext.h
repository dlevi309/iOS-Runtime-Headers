/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dataRep;
-(BOOL)loadDelayedNode:(id)arg1 ;
-(id)initWithTargetLocation:(id)arg1 package:(id)arg2 ;
-(BOOL)saveDelayedMedia:(id)arg1 toFile:(id)arg2 ;
@end

