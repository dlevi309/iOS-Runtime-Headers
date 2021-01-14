/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/SWMessage.h>
@class NSString, NSDictionary;


@protocol SWMessage <NSObject>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSDictionary * body; 
@required
-(NSDictionary *)body;
-(NSString *)name;

@end


@class NSString, NSDictionary;

@interface SWMessage : NSObject <SWMessage> {

	NSString* _name;
	NSDictionary* _body;

}

@property (nonatomic,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSDictionary * body;                 //@synthesize body=_body - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)body;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
@end

