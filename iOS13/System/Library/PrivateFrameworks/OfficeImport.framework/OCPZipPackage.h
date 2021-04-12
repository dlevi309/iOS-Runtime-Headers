/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OCPPackage.h>

@class OISFUZipArchive, NSMutableDictionary;

@interface OCPZipPackage : OCPPackage {

	OISFUZipArchive* mArchive;
	NSMutableDictionary* mParts;

}
-(id)initWithData:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(id)initWithArchive:(id)arg1 ;
-(id)partForLocation:(id)arg1 ;
-(void)resetPartForLocation:(id)arg1 ;
@end

