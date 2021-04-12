/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OCPPackage.h>

@class OISFUZipArchive, NSMutableDictionary;

@interface OCPZipPackage : OCPPackage {

	OISFUZipArchive* mArchive;
	NSMutableDictionary* mParts;

}
-(id)initWithArchive:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)partForLocation:(id)arg1 ;
-(void)resetPartForLocation:(id)arg1 ;
@end

