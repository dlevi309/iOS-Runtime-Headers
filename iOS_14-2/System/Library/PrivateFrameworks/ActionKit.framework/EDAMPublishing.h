/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSString, NSNumber;

@interface EDAMPublishing : FATObject {

	NSString* _uri;
	NSNumber* _order;
	NSNumber* _ascending;
	NSString* _publicDescription;

}

@property (nonatomic,retain) NSString * uri;                            //@synthesize uri=_uri - In the implementation block
@property (nonatomic,retain) NSNumber * order;                          //@synthesize order=_order - In the implementation block
@property (nonatomic,retain) NSNumber * ascending;                      //@synthesize ascending=_ascending - In the implementation block
@property (nonatomic,retain) NSString * publicDescription;              //@synthesize publicDescription=_publicDescription - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)uri;
-(NSString *)publicDescription;
-(void)setUri:(NSString *)arg1 ;
-(void)setAscending:(NSNumber *)arg1 ;
-(NSNumber *)ascending;
-(NSNumber *)order;
-(void)setOrder:(NSNumber *)arg1 ;
-(void)setPublicDescription:(NSString *)arg1 ;
@end

