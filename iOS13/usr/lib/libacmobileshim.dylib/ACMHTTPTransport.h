/*
* Generated on Monday, March 1, 2021 at 2:35:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <libacmobileshim.dylib/ACFHTTPTransport.h>

@interface ACMHTTPTransport : ACFHTTPTransport {

	unsigned long long _identifier;

}

@property (assign,nonatomic) unsigned long long identifier;              //@synthesize identifier=_identifier - In the implementation block
-(unsigned long long)identifier;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(void)didEnd;
-(void)didStart;
-(void)updateBackgroundTask;
@end

