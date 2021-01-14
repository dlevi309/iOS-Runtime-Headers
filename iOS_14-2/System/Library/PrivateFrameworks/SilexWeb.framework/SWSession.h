/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/SWSession.h>
@class NSString;


@protocol SWSession <NSObject>
@property (nonatomic,readonly) NSString * identifier; 
@required
-(NSString *)identifier;

@end


@class NSString;

@interface SWSession : NSObject <SWSession> {

	NSString* _identifier;

}

@property (nonatomic,readonly) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
@end

