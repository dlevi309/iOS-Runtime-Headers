/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/ASDRequestResponse.h>

@class NSArray;

@interface ASDInstallManifestRequestResponse : ASDRequestResponse {

	NSArray* _results;

}

@property (nonatomic,readonly) NSArray * results;              //@synthesize results=_results - In the implementation block
@property (assign) BOOL success; 
+(BOOL)supportsSecureCoding;
-(NSArray *)results;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithResults:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

