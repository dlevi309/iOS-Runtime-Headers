/*
* Generated on Thursday, January 14, 2021 at 2:29:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <libacmobileshim.dylib/ACFHTTPTransport.h>

@interface ACMHTTPTransport : ACFHTTPTransport {

	unsigned long long _identifier;

}

@property (assign,nonatomic) unsigned long long identifier;              //@synthesize identifier=_identifier - In the implementation block
-(void)didEnd;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)identifier;
-(void)didStart;
-(void)updateBackgroundTask;
@end

