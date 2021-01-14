/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString, NSURL;

@interface OCPPackageRelationship : NSObject {

	NSString* mIdentifier;
	NSString* mType;
	int mTargetMode;
	NSURL* mTargetLocation;

}
-(id)type;
-(id)identifier;
-(id)targetLocation;
-(int)targetMode;
-(void)readFromElement:(xmlNode*)arg1 baseLocation:(id)arg2 ;
-(id)initWithXmlElement:(xmlNode*)arg1 baseLocation:(id)arg2 ;
@end

