/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/

#import <CalendarFoundation/CalLogFormatter.h>

@class NSString;

@interface CalLogXMLFormatter : NSObject <CalLogFormatter> {

	BOOL _shouldPrettyPrint;
	BOOL _useTinyElementNames;

}

@property (assign,nonatomic) BOOL shouldPrettyPrint;                //@synthesize shouldPrettyPrint=_shouldPrettyPrint - In the implementation block
@property (assign,nonatomic) BOOL useTinyElementNames;              //@synthesize useTinyElementNames=_useTinyElementNames - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)newFormattedString:(id)arg1 ;
-(BOOL)shouldPrettyPrint;
-(void)setShouldPrettyPrint:(BOOL)arg1 ;
-(BOOL)useTinyElementNames;
-(void)setUseTinyElementNames:(BOOL)arg1 ;
@end

