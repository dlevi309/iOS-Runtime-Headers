/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class EDAMSearchRecord;

@interface EDAMLogRequest : FATObject {

	EDAMSearchRecord* _searchRecord;

}

@property (nonatomic,retain) EDAMSearchRecord * searchRecord;              //@synthesize searchRecord=_searchRecord - In the implementation block
+(id)structName;
+(id)structFields;
-(EDAMSearchRecord *)searchRecord;
-(void)setSearchRecord:(EDAMSearchRecord *)arg1 ;
@end

