/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSString, NSNumber;

@interface EDAMBusinessNotebook : FATObject {

	NSString* _notebookDescription;
	NSNumber* _privilege;
	NSNumber* _recommended;

}

@property (nonatomic,retain) NSString * notebookDescription;              //@synthesize notebookDescription=_notebookDescription - In the implementation block
@property (nonatomic,retain) NSNumber * privilege;                        //@synthesize privilege=_privilege - In the implementation block
@property (nonatomic,retain) NSNumber * recommended;                      //@synthesize recommended=_recommended - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)recommended;
-(void)setRecommended:(NSNumber *)arg1 ;
-(NSNumber *)privilege;
-(void)setPrivilege:(NSNumber *)arg1 ;
-(NSString *)notebookDescription;
-(void)setNotebookDescription:(NSString *)arg1 ;
@end

