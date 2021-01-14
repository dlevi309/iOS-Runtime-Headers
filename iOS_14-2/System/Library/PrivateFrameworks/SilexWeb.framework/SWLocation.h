/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <SilexWeb/SilexWeb-Structs.h>
#import <libobjc.A.dylib/SWLocation.h>
@class NSString, NSURL;


@protocol SWLocation <NSObject,NSCopying>
@property (readonly,nonatomic) NSString * context; 
@property (readonly,nonatomic) NSURL * URL; 
@required
-(NSString *)context;
-(NSURL *)URL;
-(NSURL *)URL;

@end


@class NSString, NSURL;

@interface SWLocation : NSObject <SWLocation> {

	NSString* _context;
	NSURL* _URL;

}

@property (nonatomic,copy,readonly) NSString * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,copy,readonly) NSURL * URL;                     //@synthesize URL=_URL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)context;
-(NSURL *)URL;
-(id)initWithContext:(id)arg1 URL:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

