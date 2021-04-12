/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)allowsInsecureMediaCapture;
-(void)setAllowsInsecureMediaCapture:(BOOL)arg1 ;
-(BOOL)suppressesICECandidateFiltering;
-(void)setSuppressesICECandidateFiltering:(BOOL)arg1 ;
@end

