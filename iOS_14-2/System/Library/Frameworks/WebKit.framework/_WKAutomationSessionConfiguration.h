/*
* Generated on Thursday, January 14, 2021 at 2:21:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _WKAutomationSessionConfiguration : NSObject <NSCopying> {

	BOOL _allowsInsecureMediaCapture;
	BOOL _suppressesICECandidateFiltering;

}

@property (assign,nonatomic) BOOL allowsInsecureMediaCapture;                   //@synthesize allowsInsecureMediaCapture=_allowsInsecureMediaCapture - In the implementation block
@property (assign,nonatomic) BOOL suppressesICECandidateFiltering;              //@synthesize suppressesICECandidateFiltering=_suppressesICECandidateFiltering - In the implementation block
-(id)init;
-(BOOL)allowsInsecureMediaCapture;
-(void)setAllowsInsecureMediaCapture:(BOOL)arg1 ;
-(BOOL)suppressesICECandidateFiltering;
-(void)setSuppressesICECandidateFiltering:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

