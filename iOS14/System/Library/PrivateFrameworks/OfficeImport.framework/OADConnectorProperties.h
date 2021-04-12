/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OADShapeProperties.h>

@class OADConnection;

@interface OADConnectorProperties : OADShapeProperties {

	OADConnection* mFrom;
	OADConnection* mTo;

}
+(id)defaultProperties;
-(id)to;
-(id)from;
-(id)init;
-(id)description;
-(id)initWithDefaults;
@end

