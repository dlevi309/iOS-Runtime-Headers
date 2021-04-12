/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/SWMessage.h>
@class NSString, NSDictionary;


@protocol SWMessage <NSObject>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSDictionary * body; 
@required
-(NSString *)name;
-(NSDictionary *)body;

@end


@class NSString, NSDictionary;

@interface SWMessage : NSObject <SWMessage> {

	NSString* _name;
	NSDictionary* _body;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSDictionary * body;                 //@synthesize body=_body - In the implementation block
-(NSString *)name;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)body;
@end

