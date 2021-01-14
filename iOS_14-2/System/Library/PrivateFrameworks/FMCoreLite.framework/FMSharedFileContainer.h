/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
*/

#import <FMCoreLite/FMFileContainer.h>

@class NSURL, NSString;

@interface FMSharedFileContainer : NSObject <FMFileContainer> {

	NSURL* _url;

}

@property (nonatomic,retain) NSURL * url;                           //@synthesize url=_url - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)groupContainerURLWithIdentifier:(id)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
@end

